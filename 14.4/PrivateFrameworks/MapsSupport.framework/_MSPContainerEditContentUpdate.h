//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/_MSPContainerEdit.h>

#import <MapsSupport/MSPContainerEditContentUpdate-Protocol.h>

@class NSString;
@protocol MSPImmutableObject, MSPMutableObject;

__attribute__((visibility("hidden")))
@interface _MSPContainerEditContentUpdate : _MSPContainerEdit <MSPContainerEditContentUpdate>
{
    id <MSPMutableObject> _updatedObject;
    id <MSPImmutableObject> _updatedImmutableObject;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <MSPImmutableObject> updatedImmutableObject; // @synthesize updatedImmutableObject=_updatedImmutableObject;
@property(readonly, nonatomic) id <MSPMutableObject> updatedObject; // @synthesize updatedObject=_updatedObject;
- (void)useImmutableObjectsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSString *description;
- (id)initWithUpdatedImmutableObject:(id)arg1;
- (id)initWithUpdatedObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

