import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.2

ApplicationWindow {
    visible: true
    width: 800
    height: 480
    title: qsTr("Hello World")
    /*---SwipeView---*/
    SwipeView {
        id: view

        currentIndex: 1
        anchors.fill: parent

        Page1 {
            id: firstPage
        }
        Page2 {
            id: secondPage
        }
        Item {
            id: thirdPage
        }
    }
    /*---PageIndicator---*/
    PageIndicator {
        id: indicator

        count: view.count
        currentIndex: view.currentIndex

        anchors.bottom: view.bottom
        anchors.horizontalCenter: parent.horizontalCenter

        delegate: Rectangle {
                implicitWidth: 8
                implicitHeight: 8

                radius: width / 2
                color: "#21be2b"

                opacity: index === indicator.currentIndex ? 0.95 : pressed ? 0.7 : 0.45

                Behavior on opacity {
                    OpacityAnimator {
                        duration: 100
                    }
                }
            }
    }
}
