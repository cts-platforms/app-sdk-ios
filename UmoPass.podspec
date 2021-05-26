Pod::Spec.new do |spec|
  spec.name         = 'UmoPass'
  spec.version      = '0.2.0-beta8'
  spec.license      = { :type => 'GPL3' }
  spec.homepage     = 'https://github.com/cts-platforms/app-sdk-ios'
  spec.authors      = { 'Cubic' => 'CTSPlatformsMobileSupport@cubic.com' }
  spec.summary      = 'UmoPass'
  spec.source       = { :git => 'https://github.com/cts-platforms/app-sdk-ios.git', :tag => 'UmoPass-0.2.0-beta8' }
  spec.vendored_frameworks = 'UmoPass/UmoPass.xcframework'
  spec.framework    = 'SystemConfiguration'
  spec.swift_version = '5.0'
  spec.ios.deployment_target = '10.0'

end