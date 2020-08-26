import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    id: world
    visible: true
    width: 1400
    height: 700
    title: qsTr("Hello World")

    property int worldTime: 10000 // 10 seconds

    /*---sky---*/
    Rectangle
    {
        id: sky
        anchors.fill: parent
        color: "light blue"
        z:-1
    }
    /*---mountain---*/
    Image {
        id: mountain
        source: "image/mountain.png"
        anchors
        {
            left: parent.left
            right: parent.right
            bottom: parent.bottom
        }
        height: parent.height*0.8
    }
    /*---sun---*/
    Rectangle
    {
        id: sun
        width: world.width*0.05
        height: width
        x: 0
        y: world.height*0.3
        radius: width/2
        color: "yellow"

        SequentialAnimation on y {
                    running: true
                    loops: Animation.Infinite

                    // Sun rise in the morning
                    NumberAnimation {
                        from: world.height
                        to: world.height * 0.3
                        duration: worldTime * 0.3
                    }

                    // Sun keep in the afternoon
                    PauseAnimation { duration: worldTime * 0.4 }

                    // Sun down in the evening
                    NumberAnimation {
                        from: world.height * 0.3
                        to: world.height
                        duration: worldTime * 0.3
                    }
                }
        SequentialAnimation on color {
                    running: true
                    loops: Animation.Infinite

                    // Morning
                    ColorAnimation {
                        to: "yellow"
                        duration: worldTime * 0.3
                    }

                    // Afternoon
                    PauseAnimation { duration: worldTime * 0.4 }

                    // Night
                    ColorAnimation {
                        to: "red"
                        duration: worldTime * 0.3
                    }
                }
    }
    /*---cloud---*/
    Cloud {
            id: cloud1; mWorldTime: worldTime; x: 100; y: 100; width: 160; height: 100; z: 1
        }
    Cloud {
            id: cloud2; mWorldTime: worldTime; x: 200; y: 300; width: 240; height: 100; z: -1

            // State for updating parent of cloud2
            states: State {
                name: "reparented"
                ParentChange { target: cloud2; parent: mountain; x: mountain.width / 3; }
            }

            // The transition when the state of cloud2 changes
            transitions: Transition {
                // Animation when changing parent of cloud2
                ParentAnimation {
                    NumberAnimation { properties: "x"; duration: worldTime * 0.5 }
                }
            }

            // Changes the state of cloud2
            MouseArea { anchors.fill: parent; onClicked: cloud2.state = "reparented" }
        }
    Cloud {
            id: cloud3; mWorldTime: worldTime; x: 400; y: 180; width: 200; height: 140; z: 1
        }
    Cloud {
            id: cloud4; mWorldTime: worldTime; x: 700; y: 280; width: 180; height: 120; z: -1
        }
    Cloud {
            id: cloud5; mWorldTime: worldTime; x: 900; y: 180; width: 380; height: 140; z: 1
        }
    /*---Animaion---*/
    /*--sun--*/
    PropertyAnimation
    {
        target: sun
        property: "x"
        from: 0
        to: world.width
        duration: worldTime
        running: true
    }
    PropertyAnimation
    {
        target: sun
        property: "color"
        from: "red"
        to: "yellow"
        duration: worldTime
        running: true
    }
    NumberAnimation {
        target: sun
        loops: Animation.Infinite
        property: "scale"
        from: 1; to: 1.5
        duration: worldTime
        running: true
    }
    /*--cloud--*/
    ParallelAnimation {
            running: true
            loops: Animation.Infinite

            // Animation to change the cloud1's size
            NumberAnimation {
                target: cloud1
                property: "scale"
                from: 1; to: 2
                duration: worldTime
                easing.type: Easing.InOutQuart
            }

            // Animation to change the cloud5's size
            NumberAnimation {
                target: cloud5
                property: "scale"
                from: 1; to: 0.2
                duration: worldTime
                easing.type: Easing.InOutQuart
            }
        }
    PropertyAnimation
    {
        target: cloud1
        loops: Animation.Infinite
        property: "rotation"
        from: 0
        to: 360
        duration: worldTime
        running: true
    }
    PropertyAnimation
    {
        loops: Animation.Infinite
        target: cloud3
        property: "x"
        from: cloud3.x
        to: world.width
        duration: worldTime
        running: true
    }
    PropertyAnimation
    {
        loops: Animation.Infinite
        target: cloud4
        property: "rotation"
        from: 0
        to: 360
        duration: worldTime
        running: true
    }
}
