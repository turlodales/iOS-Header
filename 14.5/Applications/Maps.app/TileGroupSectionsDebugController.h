//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AuxiliaryDebugViewController.h"

#import "GEOResourceManifestTileGroupObserver-Protocol.h"

@class GEOResourceManifestDownload, NSString;
@protocol MapsDebugViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface TileGroupSectionsDebugController : AuxiliaryDebugViewController <GEOResourceManifestTileGroupObserver>
{
    GEOResourceManifestDownload *_resourceManifest;
    _Bool _canChangeActiveTileGroup;
    id <MapsDebugViewControllerDelegate> _delegate;
    long long tileGroupIdentifier;
}

+ (id)navigationDestinationTitle;
- (void).cxx_destruct;
@property(nonatomic) _Bool canChangeActiveTileGroup; // @synthesize canChangeActiveTileGroup=_canChangeActiveTileGroup;
@property(retain, nonatomic) GEOResourceManifestDownload *resourceManifest; // @synthesize resourceManifest=_resourceManifest;
@property(nonatomic) long long tileGroupIdentifier; // @synthesize tileGroupIdentifier;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_tileGroup;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

