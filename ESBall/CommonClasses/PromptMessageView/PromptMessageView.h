//
//  PromptMessageView.h
//  ESBall
//
//  Created by Nelson on 1/15/13.
//  Copyright (c) 2013 nelson. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PromptMessageView : UIView

@property (nonatomic, weak) IBOutlet UIImageView *promptMsgBackgroundView;
@property (nonatomic, weak) IBOutlet UILabel *promptMsgLabel;

-(void)updateWithMessage:(NSString *)msg;

@end