//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol SFAirDropBrowserBatchDelegate, SFAirDropBrowserDelegate, SFAirDropBrowserDiffableDelegate;

@interface SFAirDropBrowser : NSObject
{
    struct __SFBrowser *_browser;
    NSMutableDictionary *_nodes;
    _Bool _shouldDeliverEmptyUpdates;
    NSString *_sessionID;
    NSArray *_people;
    id <SFAirDropBrowserDelegate> _delegate;
    id <SFAirDropBrowserBatchDelegate> _batchDelegate;
    NSString *_sendingAppBundleID;
    NSArray *_urlsBeingShared;
    NSArray *_photosAssetIDs;
    id <SFAirDropBrowserDiffableDelegate> _diffableDelegate;
    NSMutableDictionary *_nodeIDToNode;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *nodeIDToNode; // @synthesize nodeIDToNode=_nodeIDToNode;
@property __weak id <SFAirDropBrowserDiffableDelegate> diffableDelegate; // @synthesize diffableDelegate=_diffableDelegate;
@property(copy, nonatomic) NSArray *photosAssetIDs; // @synthesize photosAssetIDs=_photosAssetIDs;
@property(copy, nonatomic) NSArray *urlsBeingShared; // @synthesize urlsBeingShared=_urlsBeingShared;
@property(copy, nonatomic) NSString *sendingAppBundleID; // @synthesize sendingAppBundleID=_sendingAppBundleID;
@property __weak id <SFAirDropBrowserBatchDelegate> batchDelegate; // @synthesize batchDelegate=_batchDelegate;
@property __weak id <SFAirDropBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *people; // @synthesize people=_people;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void)getChangedIndexesForClientPeopleList:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateDiscoveredPeople;
- (void)handleBrowserCallBack;
- (void)stop;
- (void)resume;
- (void)pause;
- (void)start;
- (void)dealloc;
- (id)init;

@end

