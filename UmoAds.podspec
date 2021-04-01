Pod::Spec.new do |spec|
  spec.name         = 'UmoAds'
  spec.version      = '0.1.0-beta19'
  spec.license      = { :type => 'GPL3' }
  spec.homepage     = 'https://github.com/cts-platforms/app-sdk-ios'
  spec.authors      = { 'Cubic' => 'CTSPlatformsMobileSupport@cubic.com' }
  spec.summary      = 'UmoAds'
  spec.source       = { :git => 'https://github.com/cts-platforms/app-sdk-ios.git', :tag => 'UmoAds-0.1.0-beta19' }
  spec.vendored_frameworks = 'UmoAds/UmoAds.xcframework'
  spec.framework    = 'SystemConfiguration'
  spec.swift_version = '5.0'
  spec.ios.deployment_target = '10.0'
  spec.dependency 'SDWebImage', '~> 5.7'
  spec.dependency 'SSZipArchive', '~> 2.2'

end