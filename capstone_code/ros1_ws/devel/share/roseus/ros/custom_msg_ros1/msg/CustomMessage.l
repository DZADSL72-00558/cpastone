;; Auto-generated. Do not edit!


(when (boundp 'custom_msg_ros1::CustomMessage)
  (if (not (find-package "CUSTOM_MSG_ROS1"))
    (make-package "CUSTOM_MSG_ROS1"))
  (shadow 'CustomMessage (find-package "CUSTOM_MSG_ROS1")))
(unless (find-package "CUSTOM_MSG_ROS1::CUSTOMMESSAGE")
  (make-package "CUSTOM_MSG_ROS1::CUSTOMMESSAGE"))

(in-package "ROS")
;;//! \htmlinclude CustomMessage.msg.html


(defclass custom_msg_ros1::CustomMessage
  :super ros::object
  :slots (_custom_value ))

(defmethod custom_msg_ros1::CustomMessage
  (:init
   (&key
    ((:custom_value __custom_value) 0.0)
    )
   (send-super :init)
   (setq _custom_value (float __custom_value))
   self)
  (:custom_value
   (&optional __custom_value)
   (if __custom_value (setq _custom_value __custom_value)) _custom_value)
  (:serialization-length
   ()
   (+
    ;; float64 _custom_value
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _custom_value
       (sys::poke _custom_value (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _custom_value
     (setq _custom_value (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get custom_msg_ros1::CustomMessage :md5sum-) "9636d3d3e4d6ad9498c0e9356fecdcaa")
(setf (get custom_msg_ros1::CustomMessage :datatype-) "custom_msg_ros1/CustomMessage")
(setf (get custom_msg_ros1::CustomMessage :definition-)
      "float64 custom_value

")



(provide :custom_msg_ros1/CustomMessage "9636d3d3e4d6ad9498c0e9356fecdcaa")


