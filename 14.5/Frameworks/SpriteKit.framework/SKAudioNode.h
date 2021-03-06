//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/SKNode.h>

#import <SpriteKit/NSSecureCoding-Protocol.h>

@class AVAudioNode;

@interface SKAudioNode : SKNode <NSSecureCoding>
{
    struct SKCAudioNode *_skcAudioNode;
    _Bool _autoplayLooped;
    _Bool _positional;
}

+ (id)_audioURLWithName:(id)arg1 bundle:(id)arg2;
+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=isPositional) _Bool positional; // @synthesize positional=_positional;
@property(nonatomic) _Bool autoplayLooped; // @synthesize autoplayLooped=_autoplayLooped;
- (void)_connectToScene:(id)arg1;
- (void)_setAudioName:(id)arg1 bundle:(id)arg2;
- (void)_playLooped;
@property(retain, nonatomic) AVAudioNode *avAudioNode;
- (void)setAudioURL:(id)arg1;
- (id)audioURL;
- (void)setAudioFileName:(id)arg1;
- (id)audioFileName;
- (id)audioFile;
- (id)initWithURL:(id)arg1;
- (id)initWithFileNamed:(id)arg1;
- (id)initWithFileNamed:(id)arg1 bundle:(id)arg2;
- (_Bool)isEqualToNode:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAVAudioNode:(id)arg1;
- (id)init;
- (void)commonInit;
- (void)_didMakeBackingNode;
- (struct SKCNode *)_makeBackingNode;

@end

