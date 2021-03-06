//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKIDSListener-Protocol.h>
#import <ClassroomKit/IDSAccountControllerDelegate-Protocol.h>

@class IDSAccountController, NSString;

@interface CRKConcreteIDSAccountAdditionListener : NSObject <IDSAccountControllerDelegate, CRKIDSListener>
{
    IDSAccountController *_accountController;
    CDUnknownBlockType _handler;
}

+ (id)listenerWithServiceName:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) IDSAccountController *accountController; // @synthesize accountController=_accountController;
- (void)accountController:(id)arg1 accountAdded:(id)arg2;
- (void)invalidate;
- (id)initWithAccountController:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

