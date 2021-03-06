//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol PLCloudDeletable <NSObject>
+ (NSString *)cloudUUIDKeyForDeletion;
+ (long long)cloudDeletionTypeForTombstone:(NSDictionary *)arg1;
@property(readonly, copy) NSString *cloudUUIDForDeletion;
@property(readonly) long long cloudDeletionType;
@property(nonatomic) short cloudDeleteState;
@end

