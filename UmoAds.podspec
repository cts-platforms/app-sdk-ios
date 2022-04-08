Pod::Spec.new do |spec|
  spec.name         = 'UmoAds'
  spec.version      = '2.3.1-beta1'
  spec.license      = { :type => 'GPL3' }
  spec.homepage     = 'https://github.com/cts-platforms/app-sdk-ios'
  spec.authors      = { 'Cubic' => 'CTSPlatformsMobileSupport@cubic.com' }
  spec.summary      = 'UmoAds'
  spec.source       = { :git => 'https://github.com/cts-platforms/app-sdk-ios.git', :tag => 'UmoAds-2.3.1-beta1' }
  spec.vendored_frameworks = 'UmoAds/UmoAds.xcframework'
  spec.framework    = 'SystemConfiguration'
  spec.swift_version = '5.0'
  spec.ios.deployment_target = '12.0'
  spec.dependency 'SDWebImage', '~> 5.7'
  spec.dependency 'SSZipArchive', '~> 2.2'
  spec.dependency 'CubicAuth', '~> 1.3'

end