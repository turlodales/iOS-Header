//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/_GEOConfigDBOperationBase.h>

#import <GeoServices/_GEOConfigDBOperation-Protocol.h>

@class NSString, _GEOConfigDB;

__attribute__((visibility("hidden")))
@interface _GEOConfigDBUpdateOperation : _GEOConfigDBOperationBase <_GEOConfigDBOperation>
{
    _GEOConfigDB *_configDB;
    long long _rowId;
    NSString *_type;
    NSString *_value;
}

- (void).cxx_destruct;
- (_Bool)performOperation;
- (id)init:(id)arg1 rowId:(long long)arg2 type:(id)arg3 value:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

