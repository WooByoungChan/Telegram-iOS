#if TARGET_OS_WATCH
#import <WatchCommonWatch/TGBridgeMediaAttachment.h>
#else
#import <WatchCommon/TGBridgeMediaAttachment.h>
#endif

@interface TGBridgeAudioMediaAttachment : TGBridgeMediaAttachment

@property (nonatomic, assign) int64_t audioId;
@property (nonatomic, assign) int64_t accessHash;
@property (nonatomic, assign) int32_t datacenterId;

@property (nonatomic, assign) int64_t localAudioId;

@property (nonatomic, assign) int32_t duration;
@property (nonatomic, assign) int32_t fileSize;

- (int64_t)identifier;

@end
