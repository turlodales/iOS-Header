//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class PKGroup, PKPass;

@protocol PKGroupDelegate <NSObject>
- (void)group:(PKGroup *)arg1 didMovePassFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)group:(PKGroup *)arg1 didRemovePass:(PKPass *)arg2 atIndex:(unsigned long long)arg3;
- (void)group:(PKGroup *)arg1 didUpdatePass:(PKPass *)arg2 atIndex:(unsigned long long)arg3;
- (void)group:(PKGroup *)arg1 didInsertPass:(PKPass *)arg2 atIndex:(unsigned long long)arg3;
@end

