//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHObjectReference.h>

@interface PHAssetReference : PHObjectReference
{
    _Bool _trashed;
    long long _mediaType;
    unsigned long long _mediaSubtypes;
    unsigned long long _sourceType;
}

+ (id)representedType;
+ (id)referenceForAsset:(id)arg1;
@property(readonly, nonatomic, getter=isTrashed) _Bool trashed; // @synthesize trashed=_trashed;
@property(readonly, nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(readonly, nonatomic) unsigned long long mediaSubtypes; // @synthesize mediaSubtypes=_mediaSubtypes;
@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
- (id)initWithDictionary:(id)arg1 referenceType:(id)arg2;
- (id)dictionaryForReferenceType:(id)arg1;
- (id)initWithLocalIdentifier:(id)arg1 libraryURL:(id)arg2 mediaType:(long long)arg3 subtypes:(unsigned long long)arg4 sourceType:(unsigned long long)arg5 isTrashed:(_Bool)arg6;

@end

