; Auto-generated. Do not edit!


(cl:in-package custom_msg_ros1-msg)


;//! \htmlinclude CustomMessage.msg.html

(cl:defclass <CustomMessage> (roslisp-msg-protocol:ros-message)
  ((custom_value
    :reader custom_value
    :initarg :custom_value
    :type cl:float
    :initform 0.0))
)

(cl:defclass CustomMessage (<CustomMessage>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <CustomMessage>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'CustomMessage)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name custom_msg_ros1-msg:<CustomMessage> is deprecated: use custom_msg_ros1-msg:CustomMessage instead.")))

(cl:ensure-generic-function 'custom_value-val :lambda-list '(m))
(cl:defmethod custom_value-val ((m <CustomMessage>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader custom_msg_ros1-msg:custom_value-val is deprecated.  Use custom_msg_ros1-msg:custom_value instead.")
  (custom_value m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <CustomMessage>) ostream)
  "Serializes a message object of type '<CustomMessage>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'custom_value))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <CustomMessage>) istream)
  "Deserializes a message object of type '<CustomMessage>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'custom_value) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<CustomMessage>)))
  "Returns string type for a message object of type '<CustomMessage>"
  "custom_msg_ros1/CustomMessage")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'CustomMessage)))
  "Returns string type for a message object of type 'CustomMessage"
  "custom_msg_ros1/CustomMessage")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<CustomMessage>)))
  "Returns md5sum for a message object of type '<CustomMessage>"
  "9636d3d3e4d6ad9498c0e9356fecdcaa")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'CustomMessage)))
  "Returns md5sum for a message object of type 'CustomMessage"
  "9636d3d3e4d6ad9498c0e9356fecdcaa")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<CustomMessage>)))
  "Returns full string definition for message of type '<CustomMessage>"
  (cl:format cl:nil "float64 custom_value~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'CustomMessage)))
  "Returns full string definition for message of type 'CustomMessage"
  (cl:format cl:nil "float64 custom_value~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <CustomMessage>))
  (cl:+ 0
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <CustomMessage>))
  "Converts a ROS message object to a list"
  (cl:list 'CustomMessage
    (cl:cons ':custom_value (custom_value msg))
))
