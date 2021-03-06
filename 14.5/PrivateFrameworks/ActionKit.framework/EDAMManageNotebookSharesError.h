//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class EDAMNotFoundException, EDAMUserException, EDAMUserIdentity;

@interface EDAMManageNotebookSharesError : FATObject
{
    EDAMUserIdentity *_userIdentity;
    EDAMUserException *_userException;
    EDAMNotFoundException *_notFoundException;
}

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;
@property(retain, nonatomic) EDAMNotFoundException *notFoundException; // @synthesize notFoundException=_notFoundException;
@property(retain, nonatomic) EDAMUserException *userException; // @synthesize userException=_userException;
@property(retain, nonatomic) EDAMUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;

@end

