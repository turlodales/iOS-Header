//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSSerialQueue;
@protocol FBSWorkspaceDelegate;

@interface FBSWorkspaceInitializationOptions : NSObject
{
    _Bool _startsInactive;
    id <FBSWorkspaceDelegate> _delegate;
    FBSSerialQueue *_callOutQueue;
}

+ (id)optionsWithDelegate:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=_setStartsInactive:) _Bool _startsInactive; // @synthesize _startsInactive;
@property(retain, nonatomic) FBSSerialQueue *callOutQueue; // @synthesize callOutQueue=_callOutQueue;
@property(readonly, nonatomic) id <FBSWorkspaceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_initWithDelegate:(id)arg1;
- (id)init;

@end

