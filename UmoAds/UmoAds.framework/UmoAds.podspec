
Pod::Spec.new do |spec|
  spec.name         = 'UmoAds'
  spec.version      = '0.1.0'
  spec.license      = { :type => 'MIT' }
  spec.homepage     = 'https://github.com/cts-platforms/ads-sdk-ios'
  spec.authors      = { 'Patrick Dunshee' => 'patrick.dunshee@cubic.com' }
  spec.summary      = 'Umo Ads'
  spec.source       = { :git => 'git@github.com:cts-platforms/ads-sdk-ios.git', :tag => 'v0.1.0' }
  #spec.vendored_frameworks = 'buildproducts/universal/UmoAds/UmoAds.framework'
  spec.source_files = "Ads/**/*.{swift}"
  spec.framework    = 'SystemConfiguration'
  spec.swift_version = '5.0'
  spec.ios.deployment_target = '10.0'
  spec.osx.deployment_target = '10.10'
  spec.dependency 'SDWebImage', '~> 5.7'
  spec.dependency 'SSZipArchive', '~> 2.2'
  spec.resources = 'Ads/**/*.{pfx}'
end
