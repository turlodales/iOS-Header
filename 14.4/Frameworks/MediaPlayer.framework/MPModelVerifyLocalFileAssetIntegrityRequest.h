//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPIdentifierSet, MPModelFileAsset;

@interface MPModelVerifyLocalFileAssetIntegrityRequest : NSObject
{
    MPIdentifierSet *_sourceItemIdentifiers;
    MPModelFileAsset *_fileAsset;
}

+ (id)_operationQueue;
- (void).cxx_destruct;
@property(retain, nonatomic) MPModelFileAsset *fileAsset; // @synthesize fileAsset=_fileAsset;
@property(retain, nonatomic) MPIdentifierSet *sourceItemIdentifiers; // @synthesize sourceItemIdentifiers=_sourceItemIdentifiers;
- (id)mediaLibraryForItemIdentifiers:(id)arg1;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithFileAsset:(id)arg1 sourceItemIdentifiers:(id)arg2;

@end

