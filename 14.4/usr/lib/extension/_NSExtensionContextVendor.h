//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _NSExtensionContextVendor : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (Class)_extensionContextClass;
+ (id)_extensionMainStoryboard;
+ (Class)_extensionPrincipalClass;
+ (id)_extensionDictionary;
+ (id)_sharedExtensionContextVendor;
+ (void)_startListening:(_Bool)arg1;
+ (void)_startListening;
- (void)_setPrincipalObject:(id)arg1 forUUID:(id)arg2;
- (id)_extensionContextForUUID:(id)arg1;
- (void)_tearDownContextWithUUID:(id)arg1;
- (id)init;
- (id)_init;

@end

