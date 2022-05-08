// Auto-generated. Do not edit!

// (in-package custom_msg_ros1.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class CustomMessage {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.custom_value = null;
    }
    else {
      if (initObj.hasOwnProperty('custom_value')) {
        this.custom_value = initObj.custom_value
      }
      else {
        this.custom_value = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type CustomMessage
    // Serialize message field [custom_value]
    bufferOffset = _serializer.float64(obj.custom_value, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type CustomMessage
    let len;
    let data = new CustomMessage(null);
    // Deserialize message field [custom_value]
    data.custom_value = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 8;
  }

  static datatype() {
    // Returns string type for a message object
    return 'custom_msg_ros1/CustomMessage';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '9636d3d3e4d6ad9498c0e9356fecdcaa';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float64 custom_value
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new CustomMessage(null);
    if (msg.custom_value !== undefined) {
      resolved.custom_value = msg.custom_value;
    }
    else {
      resolved.custom_value = 0.0
    }

    return resolved;
    }
};

module.exports = CustomMessage;
