import QtQuick 2.0
import QtQuick.Window 2.14
import QtLocation 5.6
import QtPositioning 5.6

Window {
    width: Qt.platform.os == "android" ? Screen.width : 512
    height: Qt.platform.os == "android" ? Screen.height : 512
    visible: true

    Map {
        id: map
        zoomLevel: (maximumZoomLevel - minimumZoomLevel)/2
        center {
            // The Qt Company in Oslo
            latitude: 59.9485
            longitude: 10.7686
        }
    }
}
