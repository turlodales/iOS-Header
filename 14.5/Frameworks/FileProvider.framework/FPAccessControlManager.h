//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FPAccessControlManager : NSObject
{
}

- (void)revokeAccessToAllBundlesCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)revokeAccessToAllBundles;
- (void)revokeAccessToAllItemsForBundle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_killBundle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)bundleIdentifiersWithAccessToAnyItemCompletionHandler:(CDUnknownBlockType)arg1;
- (void)collectionForItemsAccessibleByBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

