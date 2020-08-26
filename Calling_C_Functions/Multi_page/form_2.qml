import QtQuick 2.3
import QtQuick.Controls 1.2

ApplicationWindow {
    id: root
    width: 800; height: 480

    Text {
        anchors.centerIn: parent
        text: qsTr("Hello World.")
    }
}
