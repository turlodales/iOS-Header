//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CustomSearchManagerObserver-Protocol.h"
#import "DataProviding-Protocol.h"

@class GEOObserverHashTable, NSString, SearchResult;

__attribute__((visibility("hidden")))
@interface MarkedLocationDataProvider : NSObject <CustomSearchManagerObserver, DataProviding>
{
    GEOObserverHashTable *_observers;
    _Bool _active;
    SearchResult *_markedLocation;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SearchResult *markedLocation; // @synthesize markedLocation=_markedLocation;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void)customSearchManager:(id)arg1 didModifyCustomSearchResult:(id)arg2 coordinateChanged:(_Bool)arg3;
- (void)customSearchManager:(id)arg1 didReplaceCustomSearchResult:(id)arg2 animated:(_Bool)arg3 shouldSelectOnMap:(_Bool)arg4 context:(id)arg5;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) GEOObserverHashTable *observers;
- (void)_updateAndNotifyObservers:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

