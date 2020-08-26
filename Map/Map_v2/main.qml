import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5
import QtQuick.Layouts 1.12
import QtWebEngine 1.8
import QtLocation 5.12
import QtPositioning 5.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("MapTiler QML demo")

    property string hostingKey: "<your MapTiler hosting key>"

    TabBar {
        id: bar
        width: parent.width
        TabButton {
            text: qsTr("Vector style - MapboxGL")
        }
        TabButton {
            text: qsTr("Raster style - MapboxGL")
        }
        TabButton {
            text: qsTr("Web Browser")
        }
    }

    StackLayout {
        width: parent.width
        anchors.top: bar.bottom
        anchors.bottom: parent.bottom

        currentIndex: bar.currentIndex
        Item {
            id: vectorTab

            // Our code for vector tab
        }
        Item {
            id: rasterTab

            // Our code for raster tab
        }
        Item {
            id: webBrowserTab

            // Our code for webbrowser tab
        }
    }
}
