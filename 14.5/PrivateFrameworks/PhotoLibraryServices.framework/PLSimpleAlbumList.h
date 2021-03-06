//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLAssetContainerList-Protocol.h>

@class NSOrderedSet, NSString;

@interface PLSimpleAlbumList : NSObject <PLAssetContainerList>
{
    NSOrderedSet *_containers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSOrderedSet *containers; // @synthesize containers=_containers;
- (id)containersRelationshipName;
- (id)photoLibrary;
- (id)managedObjectContext;
- (_Bool)canEditContainers;
- (_Bool)isEmpty;
@property(readonly, nonatomic) unsigned long long containersCount;
- (id)initWithAssetContainers:(id)arg1;
- (id)initWithAssetContainer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

