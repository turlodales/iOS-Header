//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CARSession, NSURL;

@interface CRCarplayCapabilitiesStateMachineTask : NSObject
{
    NSURL *_plistURL;
    CDUnknownBlockType _responseBlock;
    CARSession *_session;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CARSession *session; // @synthesize session=_session;
@property(copy, nonatomic) CDUnknownBlockType responseBlock; // @synthesize responseBlock=_responseBlock;
@property(copy, nonatomic) NSURL *plistURL; // @synthesize plistURL=_plistURL;

@end

