//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface DOCItemCollectionSubscriber : NSObject
{
    NSUUID *_UUID;
    CDUnknownBlockType _updateBlock;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(retain) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)initWithUpdateBlock:(CDUnknownBlockType)arg1;

@end

