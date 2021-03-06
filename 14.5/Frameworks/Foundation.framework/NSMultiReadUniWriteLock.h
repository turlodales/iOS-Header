//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSLocking-Protocol.h>

@interface NSMultiReadUniWriteLock : NSObject <NSLocking>
{
    void *_priv;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)description;
- (void)unlock;
- (void)lock;
- (_Bool)lockForWritingBeforeDate:(id)arg1;
- (_Bool)tryLockForWriting;
- (void)lockForWriting;
- (_Bool)lockForReadingBeforeDate:(id)arg1;
- (_Bool)tryLockForReading;
- (void)lockForReading;
- (void)dealloc;
- (id)init;

@end

