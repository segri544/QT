import QtQuick 2.0
import QtLocation 5.6
import QtPositioning 5.6


Rectangle {
    id: window

    property var markerItem: null
    property double oldLat: 25.6585
    property double oldLng: 100.3658
    property Component comMarker: mapMarker

    Plugin {
        id: mapPlugin
        name: "osm"

    }

    Map {
        id: mapView
        anchors.fill: parent
        plugin: mapPlugin
        center: QtPositioning.coordinate(oldLat, oldLng);
        zoomLevel: 17
        activeMapType : SatelliteMapDay

    }

    function setCenter(lat, lng) {

        mapView.pan(oldLat-lat,oldLng-lng)
        oldLat = lat
        oldLng = lng
    }

    function addMarker(lat, lng) {
        if (markerItem !== null) {
            mapView.removeMapItem(markerItem);
        }
        markerItem = comMarker.createObject(window, {
                                           coordinate: QtPositioning.coordinate(lat, lng)
                                          })
        mapView.addMapItem(markerItem)
    }
    function setZoomLevel(zoomLevel) {
        mapView.zoomLevel = zoomLevel;
    }
    Component {
        id: mapMarker
        MapQuickItem {
            id: markerImg
            anchorPoint.x: image.width/4
            anchorPoint.y: image.height
            coordinate: position

            sourceItem: Image {
                id: image
                source: "http://maps.gstatic.com/mapfiles/ridefinder-images/mm_20_red.png"
            }
        }
    }
}
