//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PPMapsSupport : NSObject
{
}

+ (_Bool)harvestMapItem:(id)arg1 documentIdentifier:(id)arg2 groupIdentifier:(id)arg3 includingPostalAddress:(_Bool)arg4 localNamedEntityStore:(id)arg5 localLocationStore:(id)arg6 error:(id *)arg7;
+ (void)importMapsDataWithFavoriteQuery:(id)arg1 localNamedEntityStore:(id)arg2 localLocationStore:(id)arg3 shouldContinueBlock:(CDUnknownBlockType)arg4;
+ (void)importMapsDataWithCollectionQuery:(id)arg1 localNamedEntityStore:(id)arg2 localLocationStore:(id)arg3 shouldContinueBlock:(CDUnknownBlockType)arg4;
+ (void)importMapsDataWithShouldContinueBlock:(CDUnknownBlockType)arg1;

@end

