//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICDLoggable-Protocol.h"

@class CloudLibraryConnection, ICConnectionConfiguration, ML3MusicLibrary, NSString;

@interface JaliscoImporter : NSObject <ICDLoggable>
{
    _Bool _isCancelled;
    float _progress;
    CloudLibraryConnection *_connection;
    ICConnectionConfiguration *_configuration;
    ML3MusicLibrary *_musicLibrary;
}

+ (id)oversizeLogCategory;
+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, nonatomic) float progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(readonly, nonatomic) ML3MusicLibrary *musicLibrary; // @synthesize musicLibrary=_musicLibrary;
@property(readonly, nonatomic) ICConnectionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) CloudLibraryConnection *connection; // @synthesize connection=_connection;
@property(readonly, copy) NSString *description;
- (void)importTracksUpToRevision:(unsigned int)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)cancel;
- (void)clearNeedsUpdateForTokens;
- (_Bool)needsUpdateForTokens;
- (_Bool)includePreorders;
- (_Bool)includeHiddenItems;
- (_Bool)includeFlavors;
- (unsigned int)onDiskRevision;
- (id)updateLibraryFromRevision:(unsigned int)arg1 toRevision:(unsigned int)arg2 withResponse:(id)arg3;
- (id)purchaseTokens;
- (id)metadataKeys;
- (id)queryFilter;
- (void)setProgress:(float)arg1;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

