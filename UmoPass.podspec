Pod::Spec.new do |spec|
  spec.name         = 'UmoPass'
  spec.version      = '0.3.1-beta2'
  spec.license      = 'COPYRIGHT - CUBIC (“CUBIC”). ALL RIGHTS RESERVED. Information Contained Herein is Proprietary and Confidential. The document is the property of CUBIC and may not be disclosed distributed, or reproduced without the express written permission of CUBIC.'
  spec.homepage     = 'https://github.com/cts-platforms/app-sdk-ios'
  spec.authors      = { 'Cubic' => 'CTSPlatformsMobileSupport@cubic.com' }
  spec.summary      = 'UmoPass'
  spec.source       = { :git => 'https://github.com/cts-platforms/app-sdk-ios.git', :tag => 'UmoPass-0.3.1-beta2' }
  spec.vendored_frameworks = 'UmoPass/UmoPass.xcframework'
  spec.framework    = 'SystemConfiguration'
  spec.swift_version = '5.0'
  spec.ios.deployment_target = '12.0'
  spec.dependency 'CubicAuth', '1.3.3-beta1'

end