//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface OBBundleManager : NSObject
{
}

+ (id)sharedManager;
- (id)bundleWithIdentifier:(id)arg1;
- (id)bundlesWithIdentifiers:(id)arg1;
- (id)orderedPrivacyBundlesWithPrivacyPaneBundle:(_Bool)arg1;
- (id)orderedPrivacyBundles;
- (id)_allPrivacyBundles;
- (id)allBundles;
- (id)_bundleSearchPath;

@end

