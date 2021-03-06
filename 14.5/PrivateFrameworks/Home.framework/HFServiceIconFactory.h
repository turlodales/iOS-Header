//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HFServiceIconFactory : NSObject
{
}

+ (id)_replacementIdentifierForIconIdentifier:(id)arg1;
+ (id)iconModifiersForService:(id)arg1;
+ (id)iconDescriptorForAccessoryCategoryOrServiceType:(id)arg1;
+ (id)iconDescriptorForAccessoryCategory:(id)arg1;
+ (id)iconDescriptorForAccessory:(id)arg1;
+ (id)overrideIconDescriptorForMultiServiceAccessory:(id)arg1 iconDescriptor:(id)arg2;
+ (id)iconDescriptorForSensorAccessoryWithNumberOfServices:(unsigned long long)arg1;
+ (id)allIconDescriptorsForServiceType:(id)arg1 serviceSubtype:(id)arg2;
+ (id)allIconDescriptorsForService:(id)arg1;
+ (id)iconDescriptorWithIdentifier:(id)arg1 forServiceType:(id)arg2 serviceSubtype:(id)arg3;
+ (id)iconDescriptorWithIdentifier:(id)arg1 forService:(id)arg2;
+ (id)_defaultIconDescriptorForServiceType:(id)arg1 serviceSubtype:(id)arg2 fallbackToPlaceholderIcon:(_Bool)arg3;
+ (id)defaultIconDescriptorForServiceType:(id)arg1 serviceSubtype:(id)arg2;
+ (id)defaultIconDescriptorForService:(id)arg1;
+ (id)_iconSetForServiceType:(id)arg1 serviceSubtype:(id)arg2 fallbackToPlaceholderIcon:(_Bool)arg3;
+ (id)_multiSubtypeIconSetForServiceType:(id)arg1 serviceSubtype:(id)arg2;

@end

