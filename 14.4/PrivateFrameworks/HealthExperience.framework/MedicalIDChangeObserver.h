//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MedicalIDChangeObserverDelegate;

@interface MedicalIDChangeObserver : NSObject
{
    int _medicalIDChangedToken;
    id <MedicalIDChangeObserverDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MedicalIDChangeObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)startObservingChanges;
- (id)init;

@end

