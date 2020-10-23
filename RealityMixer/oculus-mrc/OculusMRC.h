//
//  OculusMRC.h
//  RealityMixer
//
//  Created by Fabio de Albuquerque Dela Antonio on 10/18/20.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class OculusMRC;

@protocol OculusMRCDelegate <NSObject>
- (void)oculusMRC:(OculusMRC *)oculusMRC didReceiveImage:(UIImage *)image;
- (void)oculusMRC:(OculusMRC *)oculusMRC didReceiveBackground:(UIImage *)background foregroundColor:(UIImage *)foregroundColor foregroundAlpha:(UIImage *)foregroundAlpha;
@end

@interface OculusMRC : NSObject

@property (nonatomic, weak) id<OculusMRCDelegate> delegate;

- (instancetype)init;
- (void)addData:(const uint8_t *)data length:(int32_t)length;
- (void)update;

@end

NS_ASSUME_NONNULL_END
