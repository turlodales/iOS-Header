//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVTCoreDataCloudKitMirroringConfiguration : NSObject
{
}

+ (void)configureMirroringRequestOptions:(id)arg1 discretionary:(_Bool)arg2;
+ (void)configureMirroringRequestOptions:(id)arg1;
+ (id)managedModelAttributesRequiredForMirroring;
+ (id)createMirroringHandlerWithEnvironment:(id)arg1;
+ (void)configureStoreDescriptionForMirroring:(id)arg1 logger:(id)arg2;
+ (void)deviceConfigurationSupportsCloudKitMirroringWithLogger:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)currentContainerIdentifier;
+ (_Bool)manateeContainer:(id)arg1;
+ (_Bool)cloudKitMirroringEnabled;

@end

