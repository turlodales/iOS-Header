//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHCollectionReference.h>

@class NSArray;

@interface PHAssetCollectionReference : PHCollectionReference
{
    long long _assetCollectionType;
    long long _assetCollectionSubtype;
    NSArray *_transientAssetReferences;
}

+ (id)referenceForAssetCollection:(id)arg1;
+ (id)representedType;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *transientAssetReferences; // @synthesize transientAssetReferences=_transientAssetReferences;
@property(readonly, nonatomic) long long assetCollectionSubtype; // @synthesize assetCollectionSubtype=_assetCollectionSubtype;
@property(readonly, nonatomic) long long assetCollectionType; // @synthesize assetCollectionType=_assetCollectionType;
- (id)_transientCollectionInLibrary:(id)arg1;
- (_Bool)transient;
- (id)dictionaryForReferenceType:(id)arg1;
- (id)initWithDictionary:(id)arg1 referenceType:(id)arg2;
- (id)initWithLocalIdentifier:(id)arg1 libraryURL:(id)arg2 type:(long long)arg3 subtype:(long long)arg4;
- (id)initWithLocalIdentifier:(id)arg1 libraryURL:(id)arg2 type:(long long)arg3 subtype:(long long)arg4 assetReferences:(id)arg5 transientIdentifier:(id)arg6 transientTitle:(id)arg7;

@end

