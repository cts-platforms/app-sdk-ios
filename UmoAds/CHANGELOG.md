# UmoAds Change Log

This document contains all changes made to the _UmoAds_ for each release along with upgrade steps.

## [2.0.1]

### Changed

* Update copyright headers

## [2.0.0]

New ads backend and APIs.

### Added

* New UMOAdKit classes to use the new backend, such as `UMOAdKitBannerView`

### Changed

* Now uses _CubicAuth_ SDK as a dependency.

### Migration Steps 1.x => 2.x

* Add NSCalendarsUsageDescription to your Info.plist if it does not already exist — the new SDK has the ability to create calendar events via ad interaction
 * In AppDelegate/Startup:
     1. No changes to JWTProvider/general authentication
     1. Replace `Ads.shared.updateRegionId(X)` with `Ads.shared.updateUmoRegionId(X)`, only in the _Umo_ app.
     1. No changes to clientId or clientSecret
     1. Placeholder: Use the following function, where the `assetTitle` parameter is the name of the image in your assets folder, and it must be as big as the widest phone device supported at the existing aspect ratio (size 414x65 recommended). `Ads.shared.setGenericPlaceholder(assetTitle: "placeholder_umo_banner")`
     1. Set the publisher ID like so: `Ads.shared.umoAdKitParams.publisherId = "YOUR_PUBLISHER_ID"`
     1. Begin prefetching the ad like so: `Ads.shared.prefetchAd(spotId: "YOUR_AD_SLOT_ID", hostedParamsOverride: nil, bannerType: .ADAPTIVE_GWxAH, completion: { _ in })`
 - In the view controller holding the ad:
     1. Retrieve the banner view like so: `let bannerView = Ads.shared.getOrGenerateBannerAd(spotId: "YOUR_AD_SLOT_ID")`
     1. Add the ad to the view hierarchy by pinning to the superview's sides, one vertical edge, then add the aspect ratio constraint like so: `bannerView.addAdaptiveAspectRatioConstraint()`
     1. Load the ad with the following function:
     ``` swift
     Ads.shared.showAd(spotId: "YOUR_AD_SLOT_ID", bannerView: bannerView, assignHostedParams: true, bannerType: .ADAPTIVE_GWxAH) { result in
         switch result {
         case .success(_):
             print("show success")
         case .failure(let error):
             print("show failure: \(error.localizedDescription)")
         }
     }
     ```
     1. In the view controller's deinit, add the following: `Ads.shared.parentViewControllerDeinitializingFor(adView: bannerView)`
     1. In the view controller's viewWillAppear, add the following: `Ads.shared.parentViewControllerAppearingFor(adView: bannerView)`

## [1.0.0] - 2021-04-29

First _UmoAds_ SDK release.

### Added

* Image and HTML Ads display and reporting functionality.

### Changed

### Fixed
