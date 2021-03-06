//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHAssetCollection.h>

@class NSData, NSDate, NSString;

@interface PHProject : PHAssetCollection
{
    NSData *_projectExtensionData;
    NSDate *_creationDate;
    NSString *_projectExtensionIdentifier;
    NSString *_projectDocumentType;
    NSString *_projectRenderUuid;
}

+ (id)fetchProjectsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchProjectsWithOptions:(id)arg1;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)entityKeyMap;
+ (_Bool)managedObjectSupportsRejectedState;
+ (_Bool)managedObjectSupportsPendingState;
+ (_Bool)managedObjectSupportsTrashedState;
+ (id)identifierCode;
+ (id)fetchType;
+ (id)localIdentifierWithUUID:(id)arg1;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *projectRenderUuid; // @synthesize projectRenderUuid=_projectRenderUuid;
@property(readonly, nonatomic) NSString *projectDocumentType; // @synthesize projectDocumentType=_projectDocumentType;
@property(readonly, nonatomic) NSString *projectExtensionIdentifier; // @synthesize projectExtensionIdentifier=_projectExtensionIdentifier;
- (id)creationDate;
@property(readonly, nonatomic) NSData *projectData;
@property(readonly, nonatomic) NSData *projectExtensionData; // @synthesize projectExtensionData=_projectExtensionData;
@property(readonly, nonatomic) _Bool hasProjectPreview;
- (_Bool)canContainCustomKeyAssets;
- (_Bool)canPerformEditOperation:(long long)arg1;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;

@end

