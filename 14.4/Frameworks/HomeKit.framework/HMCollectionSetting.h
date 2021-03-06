//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMSetting.h>

#import <HomeKit/NSFastEnumeration-Protocol.h>

@class NSSet;

@interface HMCollectionSetting : HMSetting <NSFastEnumeration>
{
    NSSet *_itemValueClasses;
}

+ (void)setItemValueClasses:(id)arg1 forKeyPath:(id)arg2;
+ (void)setItemValueClass:(Class)arg1 forKeyPath:(id)arg2;
+ (id)itemValueClassesForKeyPath:(id)arg1;
+ (id)defaultItemValueClasses;
- (void).cxx_destruct;
@property(readonly, copy) NSSet *itemValueClasses; // @synthesize itemValueClasses=_itemValueClasses;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)setItemValueClasses:(id)arg1;
- (void)setItemValueClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;

@end

