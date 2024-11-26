The limited position range for the joints of a UR5 or UR5e robot are as follows (in radians):

### **Joint Position Limits**

| **Joint Name**        | **Minimum Position (rad)** | **Maximum Position (rad)** |
|------------------------|----------------------------|----------------------------|
| **shoulder_pan_joint** | -2π (-6.2832)             | 2π (6.2832)               |
| **shoulder_lift_joint**| -π (-3.1416)              | π (3.1416)                |
| **elbow_joint**        | -π (-3.1416)              | π (3.1416)                |
| **wrist_1_joint**      | -2π (-6.2832)             | 2π (6.2832)               |
| **wrist_2_joint**      | -2π (-6.2832)             | 2π (6.2832)               |
| **wrist_3_joint**      | -2π (-6.2832)             | 2π (6.2832)               |

---

### **Explanation**
- The values are provided in **radians** because ROS2 and most robotic software systems operate in radians rather than degrees.
- These limits are general for Universal Robots but may vary slightly based on your robot's specific configuration or safety settings.

---

### **How to Check Current Joint Limits**
To confirm the joint limits programmed on your robot, you can check the **robot's URDF file** or the configuration loaded in the `/robot_description` topic.

#### Example:
```bash
ros2 topic echo /robot_description
```

Alternatively, open the URDF file directly and look for the `<limit>` tag under each joint:
```xml
<joint name="shoulder_pan_joint" type="revolute">
  <limit lower="-6.2832" upper="6.2832" effort="150.0" velocity="3.0"/>
</joint>
```

---

### **Safety Considerations**
- **Avoid Hard Limits**: While these are the maximum limits, the robot's physical setup or safety configuration may impose tighter limits to avoid collisions or damage.
- **Slow Movements Near Limits**: Always reduce speed when testing near joint limits to avoid abrupt stops or protective mode triggers.
