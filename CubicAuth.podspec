Pod::Spec.new do |spec|
  spec.name         = 'CubicAuth'
  spec.version      = '0.1.0-beta10'
  spec.license      = { :type => 'GPL3' }
  spec.homepage     = 'https://github.com/cts-platforms/app-sdk-ios'
  spec.authors      = { 'Cubic' => 'CTSPlatformsMobileSupport@cubic.com' }
  spec.summary      = 'CubicAuth'
  spec.source       = { :git => 'https://github.com/cts-platforms/app-sdk-ios.git', :tag => 'CubicAuth-0.1.0-beta10' }
  spec.vendored_frameworks = 'CubicAuth/CubicAuth.xcframework'
  spec.framework    = 'SystemConfiguration'
  spec.swift_version = '5.0'
  spec.ios.deployment_target = '12.1'

end