//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSMemoryEntity.h>

#import "NSCopying-Protocol.h"

@interface DownloadAsset : SSMemoryEntity <NSCopying>
{
}

+ (Class)databaseEntityClass;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURLRequestProperties:(id)arg1;
- (id)initWithExternalManifestDictionary:(id)arg1 validateVariants:(_Bool)arg2;
- (id)initWithClientXPCAsset:(id)arg1;
- (id)copyJobAsset;

@end

