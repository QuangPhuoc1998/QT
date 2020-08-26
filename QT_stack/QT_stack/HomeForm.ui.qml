import QtQuick 2.12
import QtQuick.Controls 2.5

Page {
    width: 600
    height: 400
    property alias button: button

    title: qsTr("Home")

    Label {
        text: qsTr("You are on the home page.")
        anchors.centerIn: parent
    }

    Button {
        id: button
        x: 250
        y: 228
        text: qsTr("Button")
    }
}
