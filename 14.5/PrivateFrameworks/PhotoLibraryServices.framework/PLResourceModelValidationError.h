//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface PLResourceModelValidationError : NSError
{
}

+ (id)unreachableFileThumbnailErrorForKey:(id)arg1 assetID:(id)arg2;
+ (id)unreachableTableThumbnailErrorForKey:(id)arg1 assetID:(id)arg2;
+ (id)unreachableKeyErrorForKey:(id)arg1 atURL:(id)arg2 resource:(id)arg3;
+ (id)malformedTableThumbnailKeyErrorForKey:(id)arg1 assetID:(id)arg2;
+ (id)malformedKeyErrorForKey:(id)arg1 resource:(id)arg2;
+ (id)unexpectedLocalResourceError:(id)arg1;
+ (id)localAvailabilityInconsistencyErrorForResource:(id)arg1;
+ (id)duplicatedCPLTypeAssetErrorForAsset:(id)arg1 cplType:(unsigned long long)arg2;
+ (id)duplicateResourceErrorAmongResources:(id)arg1 forAsset:(id)arg2;
+ (id)missingRequiredResourcesErrorForAsset:(id)arg1 message:(id)arg2;
+ (id)allPossibleErrorCodes;
- (id)description;
- (id)init;

@end

