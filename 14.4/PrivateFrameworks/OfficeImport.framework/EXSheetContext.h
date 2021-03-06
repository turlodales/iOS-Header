//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/OCDDelayedNodeContext-Protocol.h>

@class EXReadState, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface EXSheetContext : NSObject <OCDDelayedNodeContext>
{
    EXReadState *mSheetState;
    NSURL *mPackageLocation;
    NSString *mType;
}

- (void).cxx_destruct;
- (_Bool)loadDelayedNode:(id)arg1;
- (id)initWithSheetLocation:(id)arg1 sheetXmlType:(id)arg2 state:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

