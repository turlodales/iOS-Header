//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SBFolderControllerDelegate;

@interface _SBHomeScreenFolderDelegate : NSObject
{
    id <SBFolderControllerDelegate> _forwardingTarget;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SBFolderControllerDelegate> forwardingTarget; // @synthesize forwardingTarget=_forwardingTarget;
- (id)backgroundViewForDockForRootFolderController:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;

@end

